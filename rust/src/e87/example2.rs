use rand::Rng;

pub fn main() {
    let mut arrayData: [i32; 100] = [0; 100];
    for x in 0..100 {
        let num = rand::thread_rng().gen_range(0..25565);
        arrayData[x] = num;
    }
    let mut total = 0;
    for x in 0..100 {
        total += arrayData[x];
    }
    println!("The total of all the values is {}", total);
}