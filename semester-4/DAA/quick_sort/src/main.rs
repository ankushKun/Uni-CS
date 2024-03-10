fn partition(arr: &mut Vec<i32>, low: i32, high: i32) -> i32 {
    let pivot = arr[high as usize];
    let mut i = low - 1;
    for j in low..high {
        if arr[j as usize] < pivot {
            i += 1;
            arr.swap(i as usize, j as usize);
        }
    }
    arr.swap((i + 1) as usize, high as usize);
    i + 1
}

fn quick_sort(arr: &mut Vec<i32>, low: i32, high: i32) {
    if low < high {
        let pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

fn main() {
    println!("Input a space seperated array");
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    let input: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    //quick sort
    let mut arr = input.clone();
    let n = arr.len() as i32;
    quick_sort(&mut arr, 0, n - 1);
    println!("Sorted array: {:?}", arr);
}
