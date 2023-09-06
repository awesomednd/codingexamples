pub fn main() {
    let mut morethan10 = 0;
    let mut equalto10 = 0;
    for x in 0..100 {
        let mut numbers = String::new();
        std::io::stdin().read_line(&mut numbers).unwrap();
        let number = numbers.trim().parse::<i32>().unwrap();
        if number > 10 {
            morethan10 += 1
        } else if number == 10 {
            equalto10 += 1
        }
    }
    println!("{} are more than 10 {} are equal to 10", morethan10, equalto10);
}