#!/bin/env python3

import sys
from audioop import mul

import matplotlib.pyplot as plt
import numpy as np

# plt.plot -> marker reference , line reference , color reference


def plot():
    plt.plot([1, 2, 3, 2, 3, 4, 3, 4, 5, 1])  # it will consider it as y
    plt.show()


def plot_x_n_y():
    xpoints = np.array([0, 6])
    ypoints = np.array([0, 250])
    plt.plot(xpoints, ypoints)

    plt.show()


def plot_without_line():
    xpoints = np.array([0, 6])
    ypoints = np.array([0, 250])
    plt.plot(xpoints, ypoints, ".")
    plt.show()


def multple_plots():
    xpoints = np.array([1, 8])
    ypoints = np.array([3, 10])
    plt.plot(xpoints, ypoints)
    xpoints = np.array([1, 2, 6, 8])
    ypoints = np.array([3, 8, 1, 10])
    plt.plot(xpoints, ypoints)
    plt.show()


# Mark Points with circle
def mark_with_circle():
    ypoints = np.array([3, 8, 1, 10])
    plt.plot(ypoints, marker="*")
    plt.show()


def color_change():
    ypoints = np.array([3, 8, 1, 10])
    plt.plot(ypoints, "o-.r")  # dot , red color ,circle
    ypoints = np.array([2, 9, 2, 9])
    # plt.plot(ypoints, marker="o")
    plt.show()


def with_marker_size():
    ypoints = np.array([3, 8, 1, 10])
    plt.plot(ypoints, "o-.r", ms=20)  # ms -> marker size
    plt.show()


def with_marker_edge_color():
    ypoints = np.array([3, 8, 1, 10])
    plt.plot(
        ypoints, "o-.r", ms=20, mec="r", mfc="g"
    )  # ms -> marker size , mfc ? and mec ?
    plt.show()


def multiple_plots_2():
    y1 = np.array([1, 5])
    y2 = np.array([5, 10])
    plt.plot(y1)
    plt.plot(y2)

    def get_label():
        plt.xlabel("X-axis")
        plt.ylabel("Y-axis")
        plt.title("Sample Graph")
        plt.legend(["Y1", "Y2"], loc="lower right")  # loc = location

    def plot():
        plt.show()


if __name__ == "__main__":
    # plot_x_n_y()
    # plot_without_line()
    # multple_plots()
    # mark_with_circle()
    # color_change()
    with_marker_edge_color()
    multiple_plots_2()
    multiple_plots_2.get_label()
    multiple_plots_2.plot()
