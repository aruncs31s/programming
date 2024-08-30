inputs = [1, 2, 3]
weights = [[2, 4, 5], [3, 4, 5], [0.1, 0.2, 0.3]]
biases = [2, -1, -2]

output = []

for neuron_weights, neuron_bias in zip(weights, biases):
    neuron_output = 0
    for n_input, weight in zip(inputs, neuron_weights):
        neuron_output = n_input * weight
    neuron_output += neuron_bias
    output.append(neuron_output)

print(output)
