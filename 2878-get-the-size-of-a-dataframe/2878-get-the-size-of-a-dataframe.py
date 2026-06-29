import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    tup=players.shape
    lis=list(tup)
    return lis