// write a function to parse the csv file in current directory and return a vector of struct

fn parse_csv() -> Vec<Record> {
    let mut rdr = csv::Reader::from_path("data.csv").unwrap();
    let mut records = Vec::new();
    for result in rdr.deserialize() {
        let record: Record = result.unwrap();
        records.push(record);
    }
    records
}
fn main() {
    parse_csv();
}

