
fn advanced_round(value: f64, increment: f64, bias: f64) -> f64 {
    ((value/increment) + bias) as i32 as f64 * increment
  }