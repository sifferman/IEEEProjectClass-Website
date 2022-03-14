struct FormatChunk : public Chunk {
    uint16_t    AudioFormat     ; // PCM = 1 (i.e. Linear quantization)
    uint16_t    NumChannels     ; // Mono = 1, Stereo = 2, etc.
    uint32_t    SampleRate      ; // 8000, 44100, etc.
    uint32_t    ByteRate        ; // == SampleRate * NumChannels * BitsPerSample/8
    uint16_t    BlockAlign      ; // == NumChannels * BitsPerSample/8
    uint16_t    BitsPerSample   ; // 8 bits = 8, 16 bits = 16, etc.
};

struct DataChunk : public Chunk {
    uint8_t     * data          ; // Sample data.
};
