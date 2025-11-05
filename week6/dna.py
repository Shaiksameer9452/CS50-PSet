# dna.py
# Usage: python dna.py data.csv sequence.txt
# Works with CS50's DNA problem CSV files.

import sys
import csv


def longest_match(sequence: str, subseq: str) -> int:
    """
    Return length of the longest run of consecutive repeats of `subseq` in `sequence`.
    Example: sequence="AAACAAACAAAC", subseq="AAAC" -> returns 3
    """
    longest = 0
    n, m = len(sequence), len(subseq)

    # For each possible starting index i, count consecutive repeats
    for i in range(n - m + 1):
        count = 0
        # While the slice matches the subsequence, advance by subseq length
        while sequence[i + count * m: i + (count + 1) * m] == subseq:
            count += 1
        if count > longest:
            longest = count

    return longest


def main():
    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    db_path = sys.argv[1]
    seq_path = sys.argv[2]

    # Read database into list of dicts; fieldnames gives header order
    with open(db_path, newline='') as csvfile:
        reader = csv.DictReader(csvfile)
        people = list(reader)
        # fieldnames: e.g. ['name', 'AGATC', 'AATG', 'TATC']
        if reader.fieldnames is None:
            print("Database has no header.")
            sys.exit(1)
        strs = reader.fieldnames[1:]  # skip 'name'

    # Read DNA sequence (may be a long single line)
    with open(seq_path, 'r') as f:
        sequence = f.read().strip()

    # Compute longest run for each STR
    profile = {s: longest_match(sequence, s) for s in strs}

    # Compare computed profile to each person (database values are strings)
    for person in people:
        if all(int(person[s]) == profile[s] for s in strs):
            print(person['name'])
            return

    print("No match")


if __name__ == "__main__":
    main()
