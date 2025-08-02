#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSStyleSheet;


/// The StyleSheetList class.
/// [`StyleSheetList`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheetList)
class StyleSheetList : public emlite::Val {
    explicit StyleSheetList(Handle h) noexcept;

public:
    explicit StyleSheetList(const emlite::Val &val) noexcept;
    static StyleSheetList take_ownership(Handle h) noexcept;

    [[nodiscard]] StyleSheetList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The item method.
    /// [`StyleSheetList.item`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheetList/item)
    CSSStyleSheet item(unsigned long index);
    /// Getter of the `length` attribute.
    /// [`StyleSheetList.length`](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheetList/length)
    [[nodiscard]] unsigned long length() const;
};

