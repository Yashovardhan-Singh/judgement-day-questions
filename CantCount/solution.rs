fn encrypt(input: &str) -> String {
    let mut n: i128 = match input.parse() {
        Ok(num) => num,
        Err(_) => return String::from("0"), // Handle parse error
    };

    if n == 0 {
        return "0".to_string();
    }

    let mut result = String::new();

    while n != 0 {
        let mut rem = n % -2;
        n /= -2;
        if rem < 0 {
            rem += 2;
            n += 1;
        }
        result.push_str(&rem.to_string());
    }

    result.chars().rev().collect()
}

fn decrypt(input: &str) -> String {
    let mut total: i128 = 0;

    for (i, c) in input.chars().rev().enumerate() {
        if c == '1' {
            total += (-2i128).pow(i as u32);
        }
    }

    total.to_string()
}

pub fn skrzat(conversion_type: char, input: &str) -> String {
    if conversion_type == 'd' {
        return format!("From decimal: {} is {}", input, encrypt(input));
    }
    format!("From binary: {} is {}", input, decrypt(input))
}
