#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ReadableStream;
class WritableStream;

/// Dictionary type ReadableWritablePair
class ReadableWritablePair : public emlite::Val {
  explicit ReadableWritablePair(Handle h) noexcept;
public:
    static ReadableWritablePair take_ownership(Handle h) noexcept;
    explicit ReadableWritablePair(const emlite::Val &val) noexcept;
    ReadableWritablePair() noexcept;
    [[nodiscard]] ReadableWritablePair clone() const noexcept;
    /// Getter of the `readable` attribute.
    [[nodiscard]] ReadableStream readable() const;
    /// Setter of the `readable` attribute.
    void readable(const ReadableStream& value);
    /// Getter of the `writable` attribute.
    [[nodiscard]] WritableStream writable() const;
    /// Setter of the `writable` attribute.
    void writable(const WritableStream& value);
};

} // namespace webbind