# import snap

# UGraph1 = snap.GenRndPowerLaw (1000, 100)
# for NI in UGraph1.Nodes():
#     print("node: %d, out-degree %d, in-degree %d" % (NI.GetId(), NI.GetOutDeg(), NI.GetInDeg()))

# UGraph2 = snap.GenRndPowerLaw (5, 2, False)
# for NI in UGraph2.Nodes():
#     print("node: %d, out-degree %d, in-degree %d" % (NI.GetId(), NI.GetOutDeg(), NI.GetInDeg()))

# UGraph2.DrawGViz(snap.gvlDot, "grid5x3.png", "Grid 5x3")


import snap

G = snap.GenRndPowerLaw (1000, 3)
G.DrawGViz(snap.gvlDot, "grid5x3.png", "Grid 5x3")

