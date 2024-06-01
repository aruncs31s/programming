import numpy as np
from manim import *
from manim.utils.tex_file_writing import tex_mobject_from_str

# ...

pi_creature = tex_mobject_from_str("\\pi", color=PINK)
# Create a NumberPlane object
plane = NumberPlane()

# Create a PiCreature object
pi_creature = PiCreature(color=PINK)

# Prepare the plane for nonlinear transformation
plane.prepare_for_nonlinear_transformation()

# Add the pi_creature to the plane
plane.add(pi_creature)


# Define the homotopy function
def homotopy(x, y, z, t):
    norm = np.linalg.norm([x, y])
    tau = interpolate(5, -5, t) + norm / SPACE_WIDTH
    alpha = sigmoid(tau)
    return [x, y + 0.5 * np.sin(2 * np.pi * alpha), z]


# Create a HomotopyAnimation object
homotopy_animation = HomotopyAnimation(homotopy, plane, run_time=3)

# Play the HomotopyAnimation
play(homotopy_animation)

# Dither for 2 seconds
dither(2)

# Create a matrix transformation object
matrix_transform = MatrixTransform([[2, 1], [1, 2]], plane)

# Play the MatrixTransform animation
play(matrix_transform)
