#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type UnderlyingSource
/// [`UnderlyingSource`](https://developer.mozilla.org/en-US/docs/Web/API/UnderlyingSource)
class UnderlyingSource : public emlite::Val {
  explicit UnderlyingSource(Handle h) noexcept;
public:
    static UnderlyingSource take_ownership(Handle h) noexcept;
    explicit UnderlyingSource(const emlite::Val &val) noexcept;
    UnderlyingSource() noexcept;
    [[nodiscard]] UnderlyingSource clone() const noexcept;
    [[nodiscard]] jsbind::Function start() const;
    void start(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function pull() const;
    void pull(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function cancel() const;
    void cancel(const jsbind::Function& value);
    [[nodiscard]] ReadableStreamType type() const;
    void type(const ReadableStreamType& value);
    [[nodiscard]] long long autoAllocateChunkSize() const;
    void autoAllocateChunkSize(long long value);
};

} // namespace webbind