fn main() {
    let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

    let mut low = 0;
    let mut high = arr.len() - 1;
    let mut mid;

    let search_key: i32;

    println!("Enter the search key");
    let mut input = String::new();
    std::io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    search_key = input.trim().parse().expect("Please type a number!");

    while low <= high {
        mid = (low + high) / 2;
        if arr[mid] == search_key {
            println!("Found at position {}", mid + 1);
            return;
        } else if arr[mid] < search_key {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    println!("Not found");
}
