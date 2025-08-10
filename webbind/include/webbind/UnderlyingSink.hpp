#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type UnderlyingSink
class UnderlyingSink : public emlite::Val {
  explicit UnderlyingSink(Handle h) noexcept;
public:
    static UnderlyingSink take_ownership(Handle h) noexcept;
    explicit UnderlyingSink(const emlite::Val &val) noexcept;
    UnderlyingSink() noexcept;
    [[nodiscard]] UnderlyingSink clone() const noexcept;
    /// Getter of the `start` attribute.
    [[nodiscard]] jsbind::Function start() const;
    /// Setter of the `start` attribute.
    void start(const jsbind::Function& value);
    /// Getter of the `write` attribute.
    [[nodiscard]] jsbind::Function write() const;
    /// Setter of the `write` attribute.
    void write(const jsbind::Function& value);
    /// Getter of the `close` attribute.
    [[nodiscard]] jsbind::Function close() const;
    /// Setter of the `close` attribute.
    void close(const jsbind::Function& value);
    /// Getter of the `abort` attribute.
    [[nodiscard]] jsbind::Function abort() const;
    /// Setter of the `abort` attribute.
    void abort(const jsbind::Function& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::Any type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::Any& value);
};

} // namespace webbind