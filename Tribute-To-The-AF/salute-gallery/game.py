from pathlib import Path
import webbrowser


def main():
    page = Path(__file__).resolve().with_name("index.html")
    if not page.is_file():
        print(f"Salute Gallery could not find {page}.")
        return 1

    url = page.as_uri()
    print(f"Salute Gallery: {url}", flush=True)
    try:
        opened = webbrowser.open(url)
    except (webbrowser.Error, OSError):
        opened = False
    if not opened:
        print(f"Open this file in your browser: {page}")
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
