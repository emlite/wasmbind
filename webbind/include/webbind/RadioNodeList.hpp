#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "NodeList.hpp"
#include "enums.hpp"


/// The RadioNodeList class.
/// [`RadioNodeList`](https://developer.mozilla.org/en-US/docs/Web/API/RadioNodeList)
class RadioNodeList : public NodeList {
    explicit RadioNodeList(Handle h) noexcept;

public:
    explicit RadioNodeList(const emlite::Val &val) noexcept;
    static RadioNodeList take_ownership(Handle h) noexcept;

    [[nodiscard]] RadioNodeList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `value` attribute.
    /// [`RadioNodeList.value`](https://developer.mozilla.org/en-US/docs/Web/API/RadioNodeList/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`RadioNodeList.value`](https://developer.mozilla.org/en-US/docs/Web/API/RadioNodeList/value)
    void value(const jsbind::String& value);
};

