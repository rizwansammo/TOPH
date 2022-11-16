# Python program showing
# Graphical representation of
# sin() function
import math
import matplotlib.pyplot as plt

in_array = [-3.14159265, -2.57039399, -0.28559933,
			0.28559933, 2.57039399, 3.14159265]

out_array = []

for i in range(len(in_array)):
	out_array.append(math.sin(in_array[i]))
	i += 1


print("in_array : ", in_array)
print("\nout_array : ", out_array)

# red for numpy.sin()
plt.plot(in_array, out_array, color = 'red', marker = "o")
plt.title("math.sin()")
plt.xlabel("X")
plt.ylabel("Y")
plt.show()
