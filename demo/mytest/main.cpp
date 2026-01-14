//
// Created by huangcanjia on 26-1-13.
//

#include "log.h"
#include "HexMeshing.hh"

int main() {
    spdlog::set_level(spdlog::level::trace);

    AlgoHex::Args args;
    args.inFileName = "/home/huangcanjia/AlgoHex/demo/HexMeshing/cylinder.ovm";
    args.outFileName = "./result.ovm";
    args.rfOutFileName = "./debug.ovm";
    AlgoHex::hexMeshing(args);

    return 0;
}