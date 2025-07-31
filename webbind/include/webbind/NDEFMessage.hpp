#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NDEFRecord;


/// The NDEFMessage class.
/// [`NDEFMessage`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFMessage)
class NDEFMessage : public emlite::Val {
    explicit NDEFMessage(Handle h) noexcept;

public:
    explicit NDEFMessage(const emlite::Val &val) noexcept;
    static NDEFMessage take_ownership(Handle h) noexcept;

    [[nodiscard]] NDEFMessage clone() const noexcept;
    /// The `new NDEFMessage(..)` constructor, creating a new NDEFMessage instance
    NDEFMessage(const jsbind::Any& messageInit);
    /// Getter of the `records` attribute.
    /// [`NDEFMessage.records`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFMessage/records)
    [[nodiscard]] jsbind::TypedArray<NDEFRecord> records() const;
};

