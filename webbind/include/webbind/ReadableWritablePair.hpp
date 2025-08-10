#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ReadableStream;
class WritableStream;

/// Dictionary type ReadableWritablePair
/// [`ReadableWritablePair`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableWritablePair)
class ReadableWritablePair : public emlite::Val {
  explicit ReadableWritablePair(Handle h) noexcept;
public:
    static ReadableWritablePair take_ownership(Handle h) noexcept;
    explicit ReadableWritablePair(const emlite::Val &val) noexcept;
    ReadableWritablePair() noexcept;
    [[nodiscard]] ReadableWritablePair clone() const noexcept;
    [[nodiscard]] ReadableStream readable() const;
    void readable(const ReadableStream& value);
    [[nodiscard]] WritableStream writable() const;
    void writable(const WritableStream& value);
};

} // namespace webbind