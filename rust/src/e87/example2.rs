use rand::Rng;

pub fn main() {
    let num = rand::thread_rng().gen_range(0..100);
    println!("{}", num)
}