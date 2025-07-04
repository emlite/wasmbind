#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class WritableStream;


class TextEncoderStream : public emlite::Val {
    explicit TextEncoderStream(Handle h) noexcept;

public:
    explicit TextEncoderStream(const emlite::Val &val) noexcept;
    static TextEncoderStream take_ownership(Handle h) noexcept;

    TextEncoderStream clone() const noexcept;
    TextEncoderStream();
    jsbind::DOMString encoding() const;
    ReadableStream readable() const;
    WritableStream writable() const;
};

