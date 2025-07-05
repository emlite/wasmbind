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
    MutationObserverInit clone() const noexcept;
    bool childList() const;
    void childList(bool value);
    bool attributes() const;
    void attributes(bool value);
    bool characterData() const;
    void characterData(bool value);
    bool subtree() const;
    void subtree(bool value);
    bool attributeOldValue() const;
    void attributeOldValue(bool value);
    bool characterDataOldValue() const;
    void characterDataOldValue(bool value);
    jsbind::Sequence<jsbind::DOMString> attributeFilter() const;
    void attributeFilter(const jsbind::Sequence<jsbind::DOMString>& value);
};

class MutationObserver : public emlite::Val {
    explicit MutationObserver(Handle h) noexcept;

public:
    explicit MutationObserver(const emlite::Val &val) noexcept;
    static MutationObserver take_ownership(Handle h) noexcept;

    MutationObserver clone() const noexcept;
    MutationObserver(const jsbind::Function& callback);
    jsbind::Undefined observe(const Node& target);
    jsbind::Undefined observe(const Node& target, const MutationObserverInit& options);
    jsbind::Undefined disconnect();
    jsbind::Sequence<MutationRecord> takeRecords();
};

