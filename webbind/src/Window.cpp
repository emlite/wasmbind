#include <webbind/Window.hpp>
#include <webbind/Document.hpp>
#include <webbind/Location.hpp>
#include <webbind/History.hpp>
#include <webbind/Navigation.hpp>
#include <webbind/CustomElementRegistry.hpp>
#include <webbind/BarProp.hpp>
#include <webbind/Element.hpp>
#include <webbind/Navigator.hpp>
#include <webbind/CookieStore.hpp>
#include <webbind/Viewport.hpp>
#include <webbind/MediaQueryList.hpp>
#include <webbind/Screen.hpp>
#include <webbind/VisualViewport.hpp>
#include <webbind/CSSStyleDeclaration.hpp>
#include <webbind/DigitalGoodsService.hpp>
#include <webbind/DocumentPictureInPicture.hpp>
#include <webbind/Fence.hpp>
#include <webbind/FileSystemFileHandle.hpp>
#include <webbind/FileSystemDirectoryHandle.hpp>
#include <webbind/External.hpp>
#include <webbind/FontData.hpp>
#include <webbind/PortalHost.hpp>
#include <webbind/Selection.hpp>
#include <webbind/SharedStorage.hpp>
#include <webbind/SpeechSynthesis.hpp>
#include <webbind/LaunchQueue.hpp>
#include <webbind/ScreenDetails.hpp>
#include <webbind/Crypto.hpp>
#include <webbind/Storage.hpp>


WindowPostMessageOptions::WindowPostMessageOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WindowPostMessageOptions WindowPostMessageOptions::take_ownership(Handle h) noexcept {
        return WindowPostMessageOptions(h);
    }
WindowPostMessageOptions::WindowPostMessageOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WindowPostMessageOptions::WindowPostMessageOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WindowPostMessageOptions WindowPostMessageOptions::clone() const noexcept { return *this; }

jsbind::String WindowPostMessageOptions::targetOrigin() const {
    return emlite::Val::get("targetOrigin").as<jsbind::String>();
}

void WindowPostMessageOptions::targetOrigin(const jsbind::String& value) {
    emlite::Val::set("targetOrigin", value);
}

OpenFilePickerOptions::OpenFilePickerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OpenFilePickerOptions OpenFilePickerOptions::take_ownership(Handle h) noexcept {
        return OpenFilePickerOptions(h);
    }
OpenFilePickerOptions::OpenFilePickerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
OpenFilePickerOptions::OpenFilePickerOptions() noexcept: emlite::Val(emlite::Val::object()) {}
OpenFilePickerOptions OpenFilePickerOptions::clone() const noexcept { return *this; }

bool OpenFilePickerOptions::multiple() const {
    return emlite::Val::get("multiple").as<bool>();
}

void OpenFilePickerOptions::multiple(bool value) {
    emlite::Val::set("multiple", value);
}

SaveFilePickerOptions::SaveFilePickerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SaveFilePickerOptions SaveFilePickerOptions::take_ownership(Handle h) noexcept {
        return SaveFilePickerOptions(h);
    }
SaveFilePickerOptions::SaveFilePickerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SaveFilePickerOptions::SaveFilePickerOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SaveFilePickerOptions SaveFilePickerOptions::clone() const noexcept { return *this; }

jsbind::String SaveFilePickerOptions::suggestedName() const {
    return emlite::Val::get("suggestedName").as<jsbind::String>();
}

void SaveFilePickerOptions::suggestedName(const jsbind::String& value) {
    emlite::Val::set("suggestedName", value);
}

DirectoryPickerOptions::DirectoryPickerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DirectoryPickerOptions DirectoryPickerOptions::take_ownership(Handle h) noexcept {
        return DirectoryPickerOptions(h);
    }
DirectoryPickerOptions::DirectoryPickerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
DirectoryPickerOptions::DirectoryPickerOptions() noexcept: emlite::Val(emlite::Val::object()) {}
DirectoryPickerOptions DirectoryPickerOptions::clone() const noexcept { return *this; }

jsbind::String DirectoryPickerOptions::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void DirectoryPickerOptions::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::Any DirectoryPickerOptions::startIn() const {
    return emlite::Val::get("startIn").as<jsbind::Any>();
}

void DirectoryPickerOptions::startIn(const jsbind::Any& value) {
    emlite::Val::set("startIn", value);
}

FileSystemPermissionMode DirectoryPickerOptions::mode() const {
    return emlite::Val::get("mode").as<FileSystemPermissionMode>();
}

void DirectoryPickerOptions::mode(const FileSystemPermissionMode& value) {
    emlite::Val::set("mode", value);
}

QueryOptions::QueryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
QueryOptions QueryOptions::take_ownership(Handle h) noexcept {
        return QueryOptions(h);
    }
QueryOptions::QueryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
QueryOptions::QueryOptions() noexcept: emlite::Val(emlite::Val::object()) {}
QueryOptions QueryOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> QueryOptions::postscriptNames() const {
    return emlite::Val::get("postscriptNames").as<jsbind::TypedArray<jsbind::String>>();
}

void QueryOptions::postscriptNames(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("postscriptNames", value);
}

IdleRequestOptions::IdleRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdleRequestOptions IdleRequestOptions::take_ownership(Handle h) noexcept {
        return IdleRequestOptions(h);
    }
IdleRequestOptions::IdleRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdleRequestOptions::IdleRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IdleRequestOptions IdleRequestOptions::clone() const noexcept { return *this; }

unsigned long IdleRequestOptions::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void IdleRequestOptions::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}

Window Window::take_ownership(Handle h) noexcept {
        return Window(h);
    }
Window Window::clone() const noexcept { return *this; }
Window::Window(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Window::Window(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Any Window::window() const {
    return EventTarget::get("window").as<jsbind::Any>();
}

jsbind::Any Window::self() const {
    return EventTarget::get("self").as<jsbind::Any>();
}

Document Window::document() const {
    return EventTarget::get("document").as<Document>();
}

jsbind::String Window::name() const {
    return EventTarget::get("name").as<jsbind::String>();
}

void Window::name(const jsbind::String& value) {
    EventTarget::set("name", value);
}

jsbind::Any Window::location() const {
    return EventTarget::get("location").as<jsbind::Any>();
}

History Window::history() const {
    return EventTarget::get("history").as<History>();
}

Navigation Window::navigation() const {
    return EventTarget::get("navigation").as<Navigation>();
}

CustomElementRegistry Window::customElements() const {
    return EventTarget::get("customElements").as<CustomElementRegistry>();
}

BarProp Window::locationbar() const {
    return EventTarget::get("locationbar").as<BarProp>();
}

BarProp Window::menubar() const {
    return EventTarget::get("menubar").as<BarProp>();
}

BarProp Window::personalbar() const {
    return EventTarget::get("personalbar").as<BarProp>();
}

BarProp Window::scrollbars() const {
    return EventTarget::get("scrollbars").as<BarProp>();
}

BarProp Window::statusbar() const {
    return EventTarget::get("statusbar").as<BarProp>();
}

BarProp Window::toolbar() const {
    return EventTarget::get("toolbar").as<BarProp>();
}

jsbind::String Window::status() const {
    return EventTarget::get("status").as<jsbind::String>();
}

void Window::status(const jsbind::String& value) {
    EventTarget::set("status", value);
}

jsbind::Undefined Window::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

bool Window::closed() const {
    return EventTarget::get("closed").as<bool>();
}

jsbind::Undefined Window::stop() {
    return EventTarget::call("stop").as<jsbind::Undefined>();
}

jsbind::Undefined Window::focus() {
    return EventTarget::call("focus").as<jsbind::Undefined>();
}

jsbind::Undefined Window::blur() {
    return EventTarget::call("blur").as<jsbind::Undefined>();
}

jsbind::Any Window::frames() const {
    return EventTarget::get("frames").as<jsbind::Any>();
}

unsigned long Window::length() const {
    return EventTarget::get("length").as<unsigned long>();
}

jsbind::Any Window::top() const {
    return EventTarget::get("top").as<jsbind::Any>();
}

jsbind::Any Window::opener() const {
    return EventTarget::get("opener").as<jsbind::Any>();
}

void Window::opener(const jsbind::Any& value) {
    EventTarget::set("opener", value);
}

jsbind::Any Window::parent() const {
    return EventTarget::get("parent").as<jsbind::Any>();
}

Element Window::frameElement() const {
    return EventTarget::get("frameElement").as<Element>();
}

jsbind::Any Window::open() {
    return EventTarget::call("open").as<jsbind::Any>();
}

jsbind::Any Window::open(const jsbind::String& url) {
    return EventTarget::call("open", url).as<jsbind::Any>();
}

jsbind::Any Window::open(const jsbind::String& url, const jsbind::String& target) {
    return EventTarget::call("open", url, target).as<jsbind::Any>();
}

jsbind::Any Window::open(const jsbind::String& url, const jsbind::String& target, const jsbind::String& features) {
    return EventTarget::call("open", url, target, features).as<jsbind::Any>();
}

Navigator Window::navigator() const {
    return EventTarget::get("navigator").as<Navigator>();
}

Navigator Window::clientInformation() const {
    return EventTarget::get("clientInformation").as<Navigator>();
}

bool Window::originAgentCluster() const {
    return EventTarget::get("originAgentCluster").as<bool>();
}

jsbind::Undefined Window::alert(const jsbind::String& message) {
    return EventTarget::call("alert", message).as<jsbind::Undefined>();
}

bool Window::confirm() {
    return EventTarget::call("confirm").as<bool>();
}

bool Window::confirm(const jsbind::String& message) {
    return EventTarget::call("confirm", message).as<bool>();
}

jsbind::String Window::prompt() {
    return EventTarget::call("prompt").as<jsbind::String>();
}

jsbind::String Window::prompt(const jsbind::String& message) {
    return EventTarget::call("prompt", message).as<jsbind::String>();
}

jsbind::String Window::prompt(const jsbind::String& message, const jsbind::String& default_) {
    return EventTarget::call("prompt", message, default_).as<jsbind::String>();
}

jsbind::Undefined Window::print() {
    return EventTarget::call("print").as<jsbind::Undefined>();
}

jsbind::Undefined Window::postMessage(const jsbind::Any& message) {
    return EventTarget::call("postMessage", message).as<jsbind::Undefined>();
}

jsbind::Undefined Window::postMessage(const jsbind::Any& message, const WindowPostMessageOptions& options) {
    return EventTarget::call("postMessage", message, options).as<jsbind::Undefined>();
}

bool Window::credentialless() const {
    return EventTarget::get("credentialless").as<bool>();
}

short Window::orientation() const {
    return EventTarget::get("orientation").as<short>();
}

jsbind::Any Window::onorientationchange() const {
    return EventTarget::get("onorientationchange").as<jsbind::Any>();
}

void Window::onorientationchange(const jsbind::Any& value) {
    EventTarget::set("onorientationchange", value);
}

CookieStore Window::cookieStore() const {
    return EventTarget::get("cookieStore").as<CookieStore>();
}

jsbind::Undefined Window::navigate(const SpatialNavigationDirection& dir) {
    return EventTarget::call("navigate", dir).as<jsbind::Undefined>();
}

Viewport Window::viewport() const {
    return EventTarget::get("viewport").as<Viewport>();
}

MediaQueryList Window::matchMedia(const jsbind::String& query) {
    return EventTarget::call("matchMedia", query).as<MediaQueryList>();
}

Screen Window::screen() const {
    return EventTarget::get("screen").as<Screen>();
}

VisualViewport Window::visualViewport() const {
    return EventTarget::get("visualViewport").as<VisualViewport>();
}

jsbind::Undefined Window::moveTo(long x, long y) {
    return EventTarget::call("moveTo", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined Window::moveBy(long x, long y) {
    return EventTarget::call("moveBy", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined Window::resizeTo(long width, long height) {
    return EventTarget::call("resizeTo", width, height).as<jsbind::Undefined>();
}

jsbind::Undefined Window::resizeBy(long x, long y) {
    return EventTarget::call("resizeBy", x, y).as<jsbind::Undefined>();
}

long Window::innerWidth() const {
    return EventTarget::get("innerWidth").as<long>();
}

long Window::innerHeight() const {
    return EventTarget::get("innerHeight").as<long>();
}

double Window::scrollX() const {
    return EventTarget::get("scrollX").as<double>();
}

double Window::pageXOffset() const {
    return EventTarget::get("pageXOffset").as<double>();
}

double Window::scrollY() const {
    return EventTarget::get("scrollY").as<double>();
}

double Window::pageYOffset() const {
    return EventTarget::get("pageYOffset").as<double>();
}

jsbind::Undefined Window::scroll(double x, double y) {
    return EventTarget::call("scroll", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined Window::scrollTo(double x, double y) {
    return EventTarget::call("scrollTo", x, y).as<jsbind::Undefined>();
}

jsbind::Undefined Window::scrollBy(double x, double y) {
    return EventTarget::call("scrollBy", x, y).as<jsbind::Undefined>();
}

long Window::screenX() const {
    return EventTarget::get("screenX").as<long>();
}

long Window::screenLeft() const {
    return EventTarget::get("screenLeft").as<long>();
}

long Window::screenY() const {
    return EventTarget::get("screenY").as<long>();
}

long Window::screenTop() const {
    return EventTarget::get("screenTop").as<long>();
}

long Window::outerWidth() const {
    return EventTarget::get("outerWidth").as<long>();
}

long Window::outerHeight() const {
    return EventTarget::get("outerHeight").as<long>();
}

double Window::devicePixelRatio() const {
    return EventTarget::get("devicePixelRatio").as<double>();
}

CSSStyleDeclaration Window::getComputedStyle(const Element& elt) {
    return EventTarget::call("getComputedStyle", elt).as<CSSStyleDeclaration>();
}

CSSStyleDeclaration Window::getComputedStyle(const Element& elt, const jsbind::String& pseudoElt) {
    return EventTarget::call("getComputedStyle", elt, pseudoElt).as<CSSStyleDeclaration>();
}

jsbind::Promise<DigitalGoodsService> Window::getDigitalGoodsService(const jsbind::String& serviceProvider) {
    return EventTarget::call("getDigitalGoodsService", serviceProvider).as<jsbind::Promise<DigitalGoodsService>>();
}

DocumentPictureInPicture Window::documentPictureInPicture() const {
    return EventTarget::get("documentPictureInPicture").as<DocumentPictureInPicture>();
}

jsbind::Any Window::event() const {
    return EventTarget::get("event").as<jsbind::Any>();
}

Fence Window::fence() const {
    return EventTarget::get("fence").as<Fence>();
}

jsbind::Promise<jsbind::TypedArray<FileSystemFileHandle>> Window::showOpenFilePicker() {
    return EventTarget::call("showOpenFilePicker").as<jsbind::Promise<jsbind::TypedArray<FileSystemFileHandle>>>();
}

jsbind::Promise<jsbind::TypedArray<FileSystemFileHandle>> Window::showOpenFilePicker(const OpenFilePickerOptions& options) {
    return EventTarget::call("showOpenFilePicker", options).as<jsbind::Promise<jsbind::TypedArray<FileSystemFileHandle>>>();
}

jsbind::Promise<FileSystemFileHandle> Window::showSaveFilePicker() {
    return EventTarget::call("showSaveFilePicker").as<jsbind::Promise<FileSystemFileHandle>>();
}

jsbind::Promise<FileSystemFileHandle> Window::showSaveFilePicker(const SaveFilePickerOptions& options) {
    return EventTarget::call("showSaveFilePicker", options).as<jsbind::Promise<FileSystemFileHandle>>();
}

jsbind::Promise<FileSystemDirectoryHandle> Window::showDirectoryPicker() {
    return EventTarget::call("showDirectoryPicker").as<jsbind::Promise<FileSystemDirectoryHandle>>();
}

jsbind::Promise<FileSystemDirectoryHandle> Window::showDirectoryPicker(const DirectoryPickerOptions& options) {
    return EventTarget::call("showDirectoryPicker", options).as<jsbind::Promise<FileSystemDirectoryHandle>>();
}

jsbind::Undefined Window::captureEvents() {
    return EventTarget::call("captureEvents").as<jsbind::Undefined>();
}

jsbind::Undefined Window::releaseEvents() {
    return EventTarget::call("releaseEvents").as<jsbind::Undefined>();
}

External Window::external() const {
    return EventTarget::get("external").as<External>();
}

jsbind::Promise<jsbind::TypedArray<FontData>> Window::queryLocalFonts() {
    return EventTarget::call("queryLocalFonts").as<jsbind::Promise<jsbind::TypedArray<FontData>>>();
}

jsbind::Promise<jsbind::TypedArray<FontData>> Window::queryLocalFonts(const QueryOptions& options) {
    return EventTarget::call("queryLocalFonts", options).as<jsbind::Promise<jsbind::TypedArray<FontData>>>();
}

jsbind::Any Window::onappinstalled() const {
    return EventTarget::get("onappinstalled").as<jsbind::Any>();
}

void Window::onappinstalled(const jsbind::Any& value) {
    EventTarget::set("onappinstalled", value);
}

jsbind::Any Window::onbeforeinstallprompt() const {
    return EventTarget::get("onbeforeinstallprompt").as<jsbind::Any>();
}

void Window::onbeforeinstallprompt(const jsbind::Any& value) {
    EventTarget::set("onbeforeinstallprompt", value);
}

jsbind::Any Window::ondeviceorientation() const {
    return EventTarget::get("ondeviceorientation").as<jsbind::Any>();
}

void Window::ondeviceorientation(const jsbind::Any& value) {
    EventTarget::set("ondeviceorientation", value);
}

jsbind::Any Window::ondeviceorientationabsolute() const {
    return EventTarget::get("ondeviceorientationabsolute").as<jsbind::Any>();
}

void Window::ondeviceorientationabsolute(const jsbind::Any& value) {
    EventTarget::set("ondeviceorientationabsolute", value);
}

jsbind::Any Window::ondevicemotion() const {
    return EventTarget::get("ondevicemotion").as<jsbind::Any>();
}

void Window::ondevicemotion(const jsbind::Any& value) {
    EventTarget::set("ondevicemotion", value);
}

PortalHost Window::portalHost() const {
    return EventTarget::get("portalHost").as<PortalHost>();
}

unsigned long Window::requestIdleCallback(const jsbind::Function& callback) {
    return EventTarget::call("requestIdleCallback", callback).as<unsigned long>();
}

unsigned long Window::requestIdleCallback(const jsbind::Function& callback, const IdleRequestOptions& options) {
    return EventTarget::call("requestIdleCallback", callback, options).as<unsigned long>();
}

jsbind::Undefined Window::cancelIdleCallback(unsigned long handle) {
    return EventTarget::call("cancelIdleCallback", handle).as<jsbind::Undefined>();
}

Selection Window::getSelection() {
    return EventTarget::call("getSelection").as<Selection>();
}

SharedStorage Window::sharedStorage() const {
    return EventTarget::get("sharedStorage").as<SharedStorage>();
}

SpeechSynthesis Window::speechSynthesis() const {
    return EventTarget::get("speechSynthesis").as<SpeechSynthesis>();
}

LaunchQueue Window::launchQueue() const {
    return EventTarget::get("launchQueue").as<LaunchQueue>();
}

jsbind::Promise<ScreenDetails> Window::getScreenDetails() {
    return EventTarget::call("getScreenDetails").as<jsbind::Promise<ScreenDetails>>();
}

jsbind::Any Window::onbeforexrselect() const {
    return EventTarget::get("onbeforexrselect").as<jsbind::Any>();
}

void Window::onbeforexrselect(const jsbind::Any& value) {
    EventTarget::set("onbeforexrselect", value);
}

jsbind::Any Window::onportalactivate() const {
    return EventTarget::get("onportalactivate").as<jsbind::Any>();
}

void Window::onportalactivate(const jsbind::Any& value) {
    EventTarget::set("onportalactivate", value);
}

Crypto Window::crypto() const {
    return EventTarget::get("crypto").as<Crypto>();
}

unsigned long Window::requestAnimationFrame(const jsbind::Function& callback) {
    return EventTarget::call("requestAnimationFrame", callback).as<unsigned long>();
}

jsbind::Undefined Window::cancelAnimationFrame(unsigned long handle) {
    return EventTarget::call("cancelAnimationFrame", handle).as<jsbind::Undefined>();
}

Storage Window::sessionStorage() const {
    return EventTarget::get("sessionStorage").as<Storage>();
}

Storage Window::localStorage() const {
    return EventTarget::get("localStorage").as<Storage>();
}

