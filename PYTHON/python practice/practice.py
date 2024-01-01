from PIL import Image, ImageDraw

# Create a blank canvas
canvas_width = 400
canvas_height = 300
canvas_color = (255, 255, 255)  # RGB values for white
canvas = Image.new("RGB", (canvas_width, canvas_height), canvas_color)

# Create a drawing object
draw = ImageDraw.Draw(canvas)

# Draw the meadow
meadow_color = (152, 251, 152)  # RGB values for pale green
meadow_box = [(0, 0), (canvas_width, canvas_height)]
draw.rectangle(meadow_box, fill=meadow_color)

# Draw the gazelle
gazelle_color = (210, 180, 140)  # RGB values for tan
gazelle_body_box = [(150, 100), (250, 240)]
draw.rectangle(gazelle_body_box, fill=gazelle_color)

gazelle_head_box = [(180, 80), (220, 120)]
draw.rectangle(gazelle_head_box, fill=gazelle_color)

# Display the image
canvas.show()
