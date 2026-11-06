# Salute Gallery console run report

Open PowerShell in the project folder and run:

```powershell
python .\game.py
```

Python 3 and a browser are required. The launcher uses only Python's standard library. Keep `index.html` and the `assets` folder beside `game.py`.

The script prints a line beginning with `Salute Gallery: file:///`, asks your default browser to open the local HTML file, and returns control to PowerShell. It starts no development server and uses no network port. Click **Start round** in the browser to play. The browser runs the game and loads the four logos from the local assets folder. Scores, hits, and clicks appear in the game window.

If Python cannot launch the browser, the console prints the path you can open manually. If the HTML file is missing, the script prints the expected path. Either condition returns exit code 1. A successful browser launch returns exit code 0.
