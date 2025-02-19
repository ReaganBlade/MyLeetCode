# 1079. Letter Tile Possibilities
from typing import List

class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        sequence = set()
        used = [False] * len(tiles)

        self._generate_sequences(tiles, "", used, sequence)

        return len(sequence) - 1

    
    def _generate_sequences(
            self, tiles: str, current: str, used: List, sequences: set
    ) -> None:
        sequences.add(current)
        
        for pos, char in enumerate(tiles):
            if not used[pos]:
                used[pos] = True
                self._generate_sequences(tiles, current + char, used, sequences)

                used[pos] = False