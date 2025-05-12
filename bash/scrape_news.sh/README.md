# 📰 News Article Scraper & Name Counter (Bash Script)

This Bash script scrapes a news website for articles, processes each article's content, and counts the occurrences of specific political figures’ names: **Netanyahu**, **Gantz**, **Bennett**, and **Peretz**.

The results are saved to a `.csv` file for further analysis.

---

## 🔍 Features

- 🌐 Automatically fetches and parses article content from a target news website
- 🔁 Processes multiple articles in a loop
- 🧠 Counts occurrences of specific names:
  - Benjamin Netanyahu
  - Benny Gantz
  - Naftali Bennett
  - Amir Peretz
- 📄 Outputs results in structured CSV format

---

## 🧰 Requirements

- `curl` – for downloading article content  
- `grep`, `sed`, `awk`, or similar – for text parsing and counting  
- `bash` – compatible shell interpreter

> **Note:** Internet access is required to fetch articles live.

