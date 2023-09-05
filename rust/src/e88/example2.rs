use rand::Rng;

pub fn main() {
    let mut arrayData: [i32; 100] = [0; 100];
    for x in 0..100 {
        let num = rand::thread_rng().gen_range(0..25565);
        arrayData[x] = num;
    }
    let mut count = 0;
    for x in 0..100 {
        if arrayData[x] > 50 {
            count += 1;
        }
    }
    println!("The total number of values above 50 is {}", count);
}