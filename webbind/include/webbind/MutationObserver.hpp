#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;
class MutationObserverInit;
class MutationRecord;


class MutationObserverInit : public emlite::Val {
  explicit MutationObserverInit(Handle h) noexcept;
public:
    static MutationObserverInit take_ownership(Handle h) noexcept;
    explicit MutationObserverInit(const emlite::Val &val) noexcept;
    MutationObserverInit() noexcept;
    [[nodiscard]] MutationObserverInit clone() const noexcept;
    [[nodiscard]] bool childList() const;
    void childList(bool value);
    [[nodiscard]] bool attributes() const;
    void attributes(bool value);
    [[nodiscard]] bool characterData() const;
    void characterData(bool value);
    [[nodiscard]] bool subtree() const;
    void subtree(bool value);
    [[nodiscard]] bool attributeOldValue() const;
    void attributeOldValue(bool value);
    [[nodiscard]] bool characterDataOldValue() const;
    void characterDataOldValue(bool value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> attributeFilter() const;
    void attributeFilter(const jsbind::TypedArray<jsbind::String>& value);
};

/// The MutationObserver class.
/// [`MutationObserver`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver)
class MutationObserver : public emlite::Val {
    explicit MutationObserver(Handle h) noexcept;

public:
    explicit MutationObserver(const emlite::Val &val) noexcept;
    static MutationObserver take_ownership(Handle h) noexcept;

    [[nodiscard]] MutationObserver clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MutationObserver(..)` constructor, creating a new MutationObserver instance
    MutationObserver(const jsbind::Function& callback);
    /// The observe method.
    /// [`MutationObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver/observe)
    jsbind::Undefined observe(const Node& target);
    /// The observe method.
    /// [`MutationObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver/observe)
    jsbind::Undefined observe(const Node& target, const MutationObserverInit& options);
    /// The disconnect method.
    /// [`MutationObserver.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver/disconnect)
    jsbind::Undefined disconnect();
    /// The takeRecords method.
    /// [`MutationObserver.takeRecords`](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver/takeRecords)
    jsbind::TypedArray<MutationRecord> takeRecords();
};

