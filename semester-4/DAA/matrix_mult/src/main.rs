fn main() {
    let mut mat1 = vec![vec![0, 2]; 2];
    let mut mat2 = vec![vec![0, 2]; 2];
    let mut res = vec![vec![0; 2]; 2];

    let mut input = String::new();
    for i in 0..2 {
        for j in 0..2 {
            println!("Enter number at m1[{}][{}]: ", i, j);
            std::io::stdin().read_line(&mut input).unwrap();
            let num: i32 = input.trim().parse().unwrap();
            mat1[i][j] = num;
            input.clear();
        }
    }

    for i in 0..2 {
        for j in 0..2 {
            println!("Enter number at m2[{}][{}]: ", i, j);
            std::io::stdin().read_line(&mut input).unwrap();
            let num: i32 = input.trim().parse().unwrap();
            mat2[i][j] = num;
            input.clear();
        }
    }

    // strassen algorithm
    let m1 = (mat1[0][0] + mat1[1][1]) * (mat2[0][0] + mat2[1][1]);
    let m2 = (mat1[1][0] + mat1[1][1]) * mat2[0][0];
    let m3 = mat1[0][0] * (mat2[0][1] - mat2[1][1]);
    let m4 = mat1[1][1] * (mat2[1][0] - mat2[0][0]);
    let m5 = (mat1[0][0] + mat1[0][1]) * mat2[1][1];
    let m6 = (mat1[1][0] - mat1[0][0]) * (mat2[0][0] + mat2[0][1]);
    let m7 = (mat1[0][1] - mat1[1][1]) * (mat2[1][0] + mat2[1][1]);

    res[0][0] = m1 + m4 - m5 + m7;
    res[0][1] = m3 + m5;
    res[1][0] = m2 + m4;
    res[1][1] = m1 - m2 + m3 + m6;

    println!("Result: {:?}", res);
}
