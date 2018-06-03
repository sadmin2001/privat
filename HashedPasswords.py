import bcrypt, csv

def ExistingUsername(username):
    with open('creds.csv', 'r') as csvfile:
        my_content = csv.reader(csvfile, delimiter=',')
        for row in my_content:
          if username == row[0]:
             print("Username exists! Please select another")
             username = input(">")
             ExistingUsername(username)

def UniquePassword(password, check):
    if password == check:
        pass
    else:
        password = input("Passwords did not match, please enter again\n>")
        password = bytes(password, encoding='utf-8')
        check = input("Please confirm your password\n>")
        check = bytes(check, encoding='utf-8')
        UniquePassword(password, check)

##def PasswordHash(passwordattempt, check) :
#    if bcrypt.checkpw(passwordattempt, check):
 #    print("The password matches, you are logged in!")
  #  else:
   #   print("Invalid username/password combination, please try again")
   #   loginattempt = input("Please enter your login.\n>")
  #    passwordattempt = input("Please enter your password.\n>")
 #     passwordattempt = bytes(passwordattempt, encoding='utf-8')
#      check = "okay"
#      PasswordHash(passwordattempt, check)



#Create a username and password
select = input("WELCOME TO THE SYSTEM, PLEASE SELECT AN OPTION\nSELECT OPTION 1 TO REGISTER, 2 TO LOG IN\n>")
select = int(select)
if select == 1:
    username = input("Please input your username\n>")


#Check to see if username exists
    ExistingUsername(username)

#    with open('creds.csv', 'r') as csvfile:
 #       my_content = csv.reader(csvfile, delimiter=',')
  #      for row in my_content:
   #       if username == row[0]:
    #         print("Username exists! Please select another")
     #        username = input(">")

    password = input("Please create your password\n>")
    check = input("Please confirm your password\n>")
    UniquePassword(password, check)


    # Hash a password for the first time, with a randomly-generated salt
    password = bytes(password, encoding='utf-8')
    hashed = bcrypt.hashpw(password, bcrypt.gensalt())

    #Turn the credentials into a key-value pair in a dictionary and write to creds.csv to register account

    CredsEntry = {username:hashed}
    with open('creds.csv', 'a') as csvfile:
        filewriter = csv.writer(csvfile)
        for key, value in CredsEntry.items():
         filewriter.writerow([key, value])
         print("You have registered your login. You may now log in.")
if select == 2:

#For logging in to an already existing account

    loginattempt = input("Please enter your login.\n>")
    passwordattempt = input("Please enter your password.\n>")
    passwordattempt = bytes(passwordattempt, encoding='utf-8')
    check = "okay"


    with open('creds.csv', 'r') as csvfile:
        my_content = csv.reader(csvfile, delimiter=',')
        for row in my_content:
          if loginattempt == row[0]:
             print("Username exists!")
             check = row[1]
#Remove extra chars created by converting to binary to avoid "invalid salt" error
    check = bytes(check, encoding='utf-8')[2:-1]
    if bcrypt.checkpw(passwordattempt, check):
                 print("It Matches!")




#Check that an unhashed password matches one that has previously been hashed


    if bcrypt.checkpw(passwordattempt, check):
     print("The password matches, you are logged in!")
    else:
      print("Invalid username/password combination, please try again another day friend")


    # Dump all entries in .CSV creds file (for science)

    with open('creds.csv', 'r') as csv_file:
        reader = csv.reader(csv_file)
        mydict = dict(reader)
    print(mydict)