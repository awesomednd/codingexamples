fn main() {
    let mut valueinputs = String::new();
    let storedvalue = 100;
    println!("Enter a number");
    std::io::stdin().read_line(&mut valueinputs).unwrap();
    let valueinput = valueinputs.trim().parse::<i32>().unwrap();
    if valueinput > storedvalue {
        println!("It is more than 100");
    }
}