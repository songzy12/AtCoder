require "rubygems"
require "bundler/setup"
require "stringex"

# This will be configured for you when you run config_deploy
deploy_branch  = "master"

system "git add -A"
message = "Site updated at #{Time.now.utc}"
puts "\n## Committing: #{message}"
system "git commit -m \"#{message}\""
Bundler.with_clean_env { system "git push origin #{deploy_branch}" }
puts "\n## Github Pages deploy complete"