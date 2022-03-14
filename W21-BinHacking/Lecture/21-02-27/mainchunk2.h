struct MiscChunk : public Chunk {
    uint8_t     * data          ; // Data for MiscChunk.
};

struct DataChunk : public MiscChunk { };

struct MainChunk : public Chunk {
    char        Format[4]       ; // Contains the letters "WAVE".
    FormatChunk formatChunk     ; // Describes the format the the sound information in dataChunk.
    DataChunk   dataChunk       ; // Contains the raw sound data.

    std::vector<MiscChunk*> miscChunks; // Contains other chunks that are not a format or data chunk.
};
