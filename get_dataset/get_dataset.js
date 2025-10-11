import { writeFileSync } from 'node:fs'
import puppeteer from 'puppeteer'

const browser = await puppeteer.launch()
const page = await browser.newPage()
await page.goto("https://www.dailymail.co.uk/news/article-2523930/Jesus-famous-person-history-according-software-algorithm.html", { waitUntil: 'networkidle2' })

const famous_people = (await page.$$eval('p b', element => element.map(name => name.textContent)))

await browser.close()

writeFileSync('data.txt', famous_people.join('\n'), 'utf-8')