# Salute Gallery

GitHub repository owner: [jdthomas084](https://github.com/jdthomas084)

Salute Gallery is a browser arcade game. Click Army, Navy, Air Force, and Marines logos as they slide across four rows. Each round lasts 20 seconds, and each click earns 25 points. The scoreboard shows total Salutes and clicks, and the legend breaks down Salutes by branch.

## Run locally

Download or clone the repository, then run this from the project folder with Python 3:

```sh
python game.py
```

On systems where Python 3 is installed as `python3`, use `python3 game.py`. The launcher opens `index.html` in your default browser and exits. No development server or Python packages are required. You can also open `index.html` directly. Select **Start round** to play.

See the [console run report](CONSOLE-RUN.md) for expected output and troubleshooting.

## Project files

- `game.py` opens the local game in a browser.
- `index.html` contains the interface and game logic.
- `assets/` contains the four branch logo SVGs.

## Use and modification

The project owner makes the game code free to use and modify.

## Artwork

The four branch logo SVGs in `assets/` (Army, Navy, Air Force, and Marines) were generated from an AI prompt. They appear as targets in the gallery and in the hit-count legend.
