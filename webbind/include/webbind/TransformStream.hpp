#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class WritableStream;


class TransformStream : public emlite::Val {
    explicit TransformStream(Handle h) noexcept;

public:
    explicit TransformStream(const emlite::Val &val) noexcept;
    static TransformStream take_ownership(Handle h) noexcept;

    TransformStream clone() const noexcept;
    TransformStream();
    TransformStream(const jsbind::Object& transformer);
    TransformStream(const jsbind::Object& transformer, const jsbind::Any& writableStrategy);
    TransformStream(const jsbind::Object& transformer, const jsbind::Any& writableStrategy, const jsbind::Any& readableStrategy);
    ReadableStream readable() const;
    WritableStream writable() const;
};

