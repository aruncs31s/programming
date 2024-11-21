# Error Bars
import matplotlib.pyplot as plt
import numpy as np


def plot_bars():
    # example data

    xvalues = np.arange(0.1, 4, 0.5)
    yvalues = np.exp(-xvalues)

    plt.plot(xvalues, yvalues, "o")
    xerror = 0.5
    # fmt -> Format specifier
    plt.errorbar(xvalues, yvalues, xerr=xerror, fmt="", ecolor="g")
    # plt.title("matplot errror bar function example")
    plt.show()


# plot error fmt='*'
def plot_fmt():
    # example data

    xvalues = np.arange(0.1, 4, 0.5)
    yvalues = np.exp(-xvalues)

    plt.plot(xvalues, yvalues, "o")
    xerror = 0.5
    # fmt -> Format specifier
    plt.errorbar(xvalues, yvalues, xerr=xerror, fmt="o", ecolor="g")
    # plt.title("matplot errror bar function example")
    plt.show()


def multiple_para():
    # example data

    xvalues = np.arange(0.1, 4, 0.5)
    yvalues = np.exp(-xvalues)

    plt.plot(xvalues, yvalues, "o")
    xerror = [0.1, 0.3, 0.3, 0.434, 0.66, 0.1, 0, 0.3]  # must match length of x

    # fmt -> Format specifier
    plt.errorbar(xvalues, yvalues, xerr=xerror, fmt="o", ecolor="g")
    # plt.title("matplot errror bar function example")
    plt.show()


def multiple_para_yerror():
    # example data

    xvalues = np.arange(0.1, 4, 0.5)
    yvalues = np.exp(-xvalues)

    plt.plot(xvalues, yvalues, "o")
    xerror = [0.1, 0.3, 0.3, 0.434, 0.66, 0.1, 0, 0.3]  # must match length of x
    yerror = [0.1, 0.3, 0.3, 0.434, 0.66, 0.1, 0, 0.3]  # must match length of x

    # fmt -> Format specifier
    plt.errorbar(xvalues, yvalues, xerr=xerror, yerr=yerror, fmt="o", ecolor="g")
    # plt.title("matplot errror bar function example")
    plt.show()


def _3Dplot():

# plot_fmt()
multiple_para()
