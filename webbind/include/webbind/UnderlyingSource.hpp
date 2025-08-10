#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type UnderlyingSource
class UnderlyingSource : public emlite::Val {
  explicit UnderlyingSource(Handle h) noexcept;
public:
    static UnderlyingSource take_ownership(Handle h) noexcept;
    explicit UnderlyingSource(const emlite::Val &val) noexcept;
    UnderlyingSource() noexcept;
    [[nodiscard]] UnderlyingSource clone() const noexcept;
    /// Getter of the `start` attribute.
    [[nodiscard]] jsbind::Function start() const;
    /// Setter of the `start` attribute.
    void start(const jsbind::Function& value);
    /// Getter of the `pull` attribute.
    [[nodiscard]] jsbind::Function pull() const;
    /// Setter of the `pull` attribute.
    void pull(const jsbind::Function& value);
    /// Getter of the `cancel` attribute.
    [[nodiscard]] jsbind::Function cancel() const;
    /// Setter of the `cancel` attribute.
    void cancel(const jsbind::Function& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] ReadableStreamType type() const;
    /// Setter of the `type` attribute.
    void type(const ReadableStreamType& value);
    /// Getter of the `autoAllocateChunkSize` attribute.
    [[nodiscard]] long long autoAllocateChunkSize() const;
    /// Setter of the `autoAllocateChunkSize` attribute.
    void autoAllocateChunkSize(long long value);
};

} // namespace webbind