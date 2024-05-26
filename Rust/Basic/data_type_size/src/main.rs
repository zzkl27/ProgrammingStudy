use std::mem::size_of_val;
fn main() {
    println!("< 정수형 데이터 타입 >");
    println!("i8[size : {} byte] : {} ~ {}",size_of_val(&i8::MAX),i8::MIN,i8::MAX);
    println!("u8[size : {} byte] : {} ~ {}",size_of_val(&u8::MAX),0,u8::MAX);
    println!("i16[size : {} byte] : {} ~ {}",size_of_val(&i16::MAX),i16::MIN,i16::MAX);
    println!("u16[size : {} byte] : {} ~ {}",size_of_val(&u16::MAX),0,u16::MAX);
    println!("i32[size : {} byte] : {} ~ {}",size_of_val(&i32::MAX),i32::MIN,i32::MAX);
    println!("u32[size : {} byte] : {} ~ {}",size_of_val(&u32::MAX),0,u32::MAX);
    println!("i64[size : {} byte] : {} ~ {}",size_of_val(&i64::MAX),i64::MIN,i64::MAX);
    println!("u64[size : {} byte] : {} ~ {}",size_of_val(&u64::MAX),0,u64::MAX);
    println!("i64[size : {} byte] : {} ~ {}",size_of_val(&i128::MAX),i128::MIN,i128::MAX);
    println!("u64[size : {} byte] : {} ~ {}",size_of_val(&u128::MAX),0,u128::MAX);
    println!("isize[size : {} byte] : {} ~ {}",size_of_val(&isize::MAX),isize::MIN,isize::MAX);
    println!("usize[size : {} byte] : {} ~ {}",size_of_val(&usize::MAX),0,usize::MAX);

    println!("< 실수형 데이터 타입 >");
    println!("f32[size : {} byte] : {:e} ~ {:e}",size_of_val(&f32::MAX),f32::MIN,f32::MAX);
    println!("f64[size : {} byte] : {:e} ~ {:e}",size_of_val(&f64::MAX),f64::MIN,f64::MAX);
    println!("< Boolean 데이터 타입 >");
    println!("bool[size : {} byte] : false or true",size_of_val(& false));
    println!("< 문자 데이터 타입 >");
    println!("char[size : {} byte] : \'{}\' or \'{}\'",size_of_val(&'a'), 0 as char, char::MAX);
}

