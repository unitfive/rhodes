# -*- encoding: utf-8 -*-

Gem::Specification.new do |s|
  s.name = %q{rhodes}
  s.version = "1.2.2"

  s.required_rubygems_version = Gem::Requirement.new(">= 0") if s.respond_to? :required_rubygems_version=
  s.authors = ["Rhomobile"]
  s.date = %q{2009-03-31}
  s.description = %q{Rhodes mobile framework}
  s.email = %q{dev@rhomobile.com}
  s.extra_rdoc_files = ["README.textile", "LICENSE"]
  files = Array.new
  IO.read("Manifest.txt").each_line {|x| files << x.chomp}
  s.files =  files
  s.has_rdoc = true
  s.homepage = %q{http://www.rhomobile.com}
  s.rdoc_options = ["--inline-source", "--charset=UTF-8"]
  s.require_paths = ["lib"]
  s.rubyforge_project = %q{rhodes}
  s.rubygems_version = %q{1.3.0}
  s.executables << 'rhogen'
  s.executables << 'upgrade-rhodes-app'
  #this is a hack, we dont have an extension, but we want to run postinstall code. It's done via the 'building' of an extension
  s.extensions << 'ext/extconf.rb'
  s.summary = %q{The Rhodes framework is the easiest way to develop NATIVE apps with full device capabilities (GPS, PIM, camera, etc.) for any smartphone.}

  if s.respond_to? :specification_version then
    current_version = Gem::Specification::CURRENT_SPECIFICATION_VERSION
    s.specification_version = 2

    if Gem::Version.new(Gem::RubyGemsVersion) >= Gem::Version.new('1.2.0') then
      s.add_runtime_dependency(%q<diff-lcs>, [">= 1.1.2"])
    else
      s.add_dependency(%q<diff-lcs>, [">= 1.1.2"])
    end
  else
    s.add_dependency(%q<diff-lcs>, [">= 1.1.2"])
  end
end
