struct MainChunk : public Chunk {
    char        Format[4]       ; // Contains the letters "WAVE".
    FormatChunk formatChunk     ; // Describes the format the the sound information in dataChunk.
    DataChunk   dataChunk       ; // Contains the raw sound data.
};
