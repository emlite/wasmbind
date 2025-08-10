#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type WriterWriteOptions
class WriterWriteOptions : public emlite::Val {
  explicit WriterWriteOptions(Handle h) noexcept;
public:
    static WriterWriteOptions take_ownership(Handle h) noexcept;
    explicit WriterWriteOptions(const emlite::Val &val) noexcept;
    WriterWriteOptions() noexcept;
    [[nodiscard]] WriterWriteOptions clone() const noexcept;
    /// Getter of the `context` attribute.
    [[nodiscard]] jsbind::String context() const;
    /// Setter of the `context` attribute.
    void context(const jsbind::String& value);
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind