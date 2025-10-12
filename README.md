# Bucket Sort Algorithm Implementation

A C programming project that implements and compares two sorting algorithms: **Bucket Sort** and **Bubble Sort**. This project sorts a dataset of famous historical figures and provides performance metrics including comparisons and swaps.

## 📋 Project Overview

This educational project demonstrates the implementation of two different sorting algorithms:
- **Bucket Sort**: A distribution-based sorting algorithm that distributes elements into buckets based on their first letter
- **Bubble Sort**: A comparison-based sorting algorithm used for sorting individual buckets

The program sorts a dataset of 100 famous historical figures in descending order (Z to A) and provides detailed performance statistics.

## 🏗️ Project Structure

```
bucket-sort/
├── algorithms.implementation.c    # Main program file
├── data.txt                      # Dataset of famous people (100 names)
├── lib/                          # Header files directory
│   ├── bucket_sort.h            # Bucket sort implementation
│   ├── bubble_sort.h            # Bubble sort implementation
│   └── uploadData.h             # Data loading functionality
├── get_dataset/                 # Dataset generation tools
│   ├── get_dataset.js           # Web scraper for data collection
│   ├── get_dataset.py           # Alternative Python scraper
│   ├── package.json             # Node.js dependencies
│   └── node_modules/            # Node.js modules
└── README.md                    # This file
```

## 🚀 Features

- **Interactive Menu**: Choose between Bucket Sort and Bubble Sort algorithms
- **Performance Metrics**: Track and display the number of comparisons and swaps
- **Real Dataset**: Uses a curated list of 100 famous historical figures
- **Modular Design**: Clean separation of concerns with header files
- **Data Collection Tools**: Automated web scraping to gather dataset

## 🛠️ Technologies Used

- **C Programming**: Core algorithm implementation
- **Node.js + Puppeteer**: Web scraping for dataset generation
- **Python**: Alternative data collection script

## 📊 Algorithm Details

### Bucket Sort Implementation
- Uses 26 buckets (A-Z) for distribution
- Distributes elements based on the first letter of each name
- Sorts individual buckets using Bubble Sort
- Gathers sorted elements back into the main array

### Bubble Sort Implementation
- Standard comparison-based sorting algorithm
- Used for sorting individual buckets in the Bucket Sort implementation
- Tracks comparisons and swaps for performance analysis

## 🏃‍♂️ How to Run

### Prerequisites
- C compiler (gcc, clang, or equivalent)
- Node.js (for dataset generation)

### Compilation and Execution
```bash
# Compile the program
gcc -o bucket_sort algorithms.implementation.c

# Run the program
./bucket_sort
```

### Dataset Generation (Optional)
If you want to regenerate the dataset:
```bash
cd get_dataset
npm install
node get_dataset.js
```

## 🎮 Usage

1. **Compile and run** the program
2. **Select algorithm**: Choose between Bubble Sort (1) or Bucket Sort (2)
3. **Enter quantity**: Specify how many names to sort (1-100)
4. **View results**: See the sorted names and performance statistics

### Example Output
```
Select the sorting algorithm:
[1] Bubble Sort
[2] Bucket Sort
> 2

> [BUCKET SORT] Insira a quantidade de nomes para desordenar: 50

Ordenando array de Z para A:

William Shakespeare
Thomas Jefferson
...
Albert Einstein

> Foram feitas 245 comparacoes
> Foram feitas 89 trocas
```

## 📈 Performance Analysis

The program provides insights into algorithm efficiency by tracking:
- **Comparisons**: Number of element comparisons made
- **Swaps**: Number of element exchanges performed

These metrics help understand the time complexity differences between the algorithms.

## 🎓 Educational Value

This project demonstrates:
- **Algorithm Implementation**: Hands-on coding of sorting algorithms
- **Performance Analysis**: Understanding algorithm complexity through metrics
- **Data Structures**: Working with arrays and string manipulation
- **Modular Programming**: Clean code organization with header files
- **Web Scraping**: Automated data collection techniques

## 🔧 Customization

- **Dataset**: Modify `data.txt` to use different names
- **Bucket Count**: Adjust `BUCKETS_QTT` in `bucket_sort.h`
- **Sorting Order**: Change comparison logic to sort A-Z instead of Z-A
- **Performance Metrics**: Add timing measurements for execution time

## 📝 Notes

- The program sorts names in **descending order** (Z to A)
- Dataset contains 100 famous historical figures
- Bucket Sort uses Bubble Sort for individual bucket sorting
- All strings are limited to 50 characters maximum

## 🤝 Contributing

This is an educational project, but suggestions and improvements are welcome!

## 📄 License

This project is created for educational purposes as part of a programming course.
