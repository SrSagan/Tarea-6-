import tensorflow as tf
import numpy as np
from tensorflow import keras
import time

model = tf.keras.Sequential([keras.layers.Dense(units=1, input_shape=[1])])
model.compile(optimizer='sgd', loss='mean_squared_error')

xs = np.array([], dtype=float)
ys = np.array([], dtype=float)

contador = 1
while contador < 200:
    xs = np.append(xs, contador)
    valor=(contador+1)
    ys = np.append(ys, valor)
    contador = contador+1

print(xs)
print(ys)
start = time.time()
model.fit(xs, ys, epochs=100)
end = time.time()
print(model.predict([2001.0]))
print("TimeTook", end-start)