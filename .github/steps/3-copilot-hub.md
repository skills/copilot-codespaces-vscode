<!--
  <<< Author notes: Step 3 >>>
  Start this step by acknowledging the previous step.
  Define terms and link to docs.github.com.
-->

## Step 3: View the GitHub Copilot tab with multiple suggestions

_Nice work! You just used AI code suggestions within a Javascript file by using GitHub Copilot :sparkles:_

Keep in mind that as you continue to use copilot, you may not want some of the suggestions GitHub Copilot offers. GitHub Copilot will show you multiple suggestions in a new tab.

### :keyboard: Activity: Pull the latest code to the Codespace repo.

> **Note**
> Pull MUST be done prior to the next activity.

1. Use the VS Code terminal to pull the latest code:

   ```
   git pull
   ```

### :keyboard: Activity: Add another Javascript method and view all suggestions

1. From inside the codespace in the VS Code explorer window, create a new file. Note: If you closed the Codespace from above please open it back up or create a new Codespace.
2. Name the file `member.js`
3. In the `member.js` file, type the following function header.
   ```
   function skillsMember()
   ```
4. Stop typing and view the Copilot suggestion by hovering over the red squiggly and select the `...`
5. Click `Open Completions Panel`. Copilot will synthesize around 10 different code suggestions. You should see something like this:
   ![Screen Shot 2023-04-27 at 10 06 55 AM](https://user-images.githubusercontent.com/26442605/234937592-d196bd5e-8ac2-4d9a-87f4-94e8a9b6a417.png)
6. Find a solution you like and click `Accept Solution`.
7. Your `member.js` file will be updated with your solution.

### :keyboard: Activity: Push code to your repository from the codespace

1. Use the VS Code terminal to add the `member.js` file to the repository:

   ```
   git add member.js
   ```

2. Next from the VS Code terminal stage and commit the changes to the repository:

   ```
   git commit -m "Copilot second commit"
   ```

3. Finally from the VS Code terminal push to code to the repository:

   ```
   git push
   ```

**Wait about 60 seconds then refresh your repository landing page for the next step.**
