fn main() {
    let mut mark1s = String::new();
    let mut mark2s = String::new();
    println!("Enter the first mark");
    std::io::stdin().read_line(&mut mark1s).unwrap();
    println!("Enter the seccond mark");
    std::io::stdin().read_line(&mut mark2s).unwrap();
    let mark1 = mark1s.trim().parse::<i32>().unwrap();
    let mark2 = mark2s.trim().parse::<i32>().unwrap();
    if mark1 >= 90 && mark2 >= 90 {
        println!("Well done you got top marks on both of your tests");
    } else if mark1 >= 90 || mark2 >= 90 {
        println!("You scored top marks on one of your tests");
    } else {
        println!("You didn't quite get top markes on the tests, try again next time");
    }
}