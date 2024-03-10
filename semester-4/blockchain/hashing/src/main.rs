use sha2::{Digest, Sha256};

fn main() {
    let input = String::from("Input str");

    let mut hasher = Sha256::new();

    hasher.update(&input);

    let result = hasher.finalize();

    println!("Hash for {} is {:x}", &input, result);
}
