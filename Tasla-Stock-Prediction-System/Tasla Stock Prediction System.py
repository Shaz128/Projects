import pandas as pd
import matplotlib.pyplot as plt
from mplfinance.original_flavor import candlestick_ohlc
import matplotlib.dates as mpl_dates
import yfinance as yf
from datetime import datetime
from sklearn.tree import DecisionTreeRegressor
from sklearn.metrics import mean_absolute_error
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestRegressor
from sklearn.metrics import mean_squared_error
from sklearn.linear_model import LinearRegression

#######################################################################################################
######################################### Dataset download ############################################
#######################################################################################################

start_date = datetime.now() - pd.DateOffset(months=12)
end_date = datetime.now()
ticker = ['TSLA']
data = yf.download(ticker, start=start_date, end=end_date)
data = data.dropna(axis=0)
y = data.Close
features = ['Open','High','Low','Volume']
X= data[features]

data['Date'] = data.index.map(mpl_dates.date2num)
ohlc_data = data[['Date', 'Open', 'High', 'Low', 'Close']].values

test_instance = yf.download(ticker, period="1d")
instance_x = test_instance[['Open', 'High', 'Low','Volume']]

today_close = test_instance['Close']
today_close_value = today_close[0]
#######################################################################################################
##################################### CandleStick Graph ###############################################
#######################################################################################################

# Create a new figure and axis
fig, ax = plt.subplots()

# Plot the candlestick chart
candlestick_ohlc(ax, ohlc_data, width=0.6, colorup='g', colordown='r')

# Customize the appearance of the graph
ax.xaxis_date()  # Format the x-axis as dates
ax.grid(True)  # Add a grid
plt.xticks(rotation=45)  # Rotate x-axis labels for better readability
plt.title(f"{ticker} Candlestick Chart")

# Display the graph
plt.show()

#######################################################################################################
######################################### Dataset Split ###############################################
#######################################################################################################

train_X, val_X, train_y, val_y = train_test_split(X, y, random_state = 0)

#######################################################################################################
######################################### DESCISION TREE MODEL ########################################
#######################################################################################################

tsla_dt_model = DecisionTreeRegressor(random_state=1)
tsla_dt_model.fit(train_X, train_y)
val_predictions = tsla_dt_model.predict(val_X)
print("MAE for Descision Tree Regressor: ")
print(mean_absolute_error(val_y, val_predictions))
val_predictions = tsla_dt_model.predict(instance_x)
print("descision tree prediction: ")
print(val_predictions)
print("tomorrow the expected close value can be: ")
diff = float(val_predictions) - today_close_value
#######################################################################################################
####################################### LINEAR REGRESSION MODEL #######################################
#######################################################################################################

tsla_lr_model = LinearRegression()
tsla_lr_model.fit(train_X, train_y)
predictions = tsla_lr_model.predict(val_X)
from sklearn.metrics import mean_squared_error, r2_score
print("MSE for linear regression: ")
print( mean_squared_error(val_y, predictions))
val_predictions = tsla_lr_model.predict(instance_x)
print("Linear regression prediction: ")
print(val_predictions)
exit()
